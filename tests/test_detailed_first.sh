#!/bin/sh

PROG="$1"

mkdir -p testoutput
TEST=testoutput

TESTNAME="Test detailed first telegram"
TESTRESULT="ERROR"

$PROG --detailedfirst --format=json 1844AE4C4455223368077A55000000_041389E20100023B0000 Gurka iperl 33225544 NOKEY | jq . --sort-keys | grep -v timestamp > $TEST/test_output.txt 2>&1

cat <<EOF > $TEST/test_expected.txt
{
  "_": "telegram",
  "id": "33225544",
  "max_flow_m3h": 0,
  "media": "water",
  "meter": "iperl",
  "name": "Gurka",
  "total_m3": 123.529,
  "details" : {
    "telegram" : "1844AE4C4455223368077A55000000041389E20100023B0000",
    "total_m3": {
      "quantity": "Volume",
      "unit": "m3",
      "offset": 17,
      "difvif": "0413",
      "val": "89E20100",
      "info": "Total volume of water measured."
    },
    "max_flow_m3h": {
      "quantity": "Flow",
      "unit": "m3h",
      "offset": 23,
      "difvif": "023B",
      "val": "0000",
      "info": "Max flow of water last week."
    }
    "total_l": {
      "quantity": "Volume",
      "unit": "l",
      "calculated": "total_m3"
      "info": "Total converted to litres."
    }
  }
}
EOF

if [ "$?" = "0" ]
then
    diff $TEST/test_expected.txt $TEST/test_output.txt
    if [ "$?" = "0" ]
    then
        echo OK: $TESTNAME
        TESTRESULT="OK"
    else
        if [ "$USE_MELD" = "true" ]
        then
            meld $TEST/test_expected.txt $TEST/test_output.txt
        fi
    fi
fi

if [ "$TESTRESULT" = "ERROR" ]
then
    echo ERROR: $TESTNAME
    exit 1
fi
