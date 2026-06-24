# Research before implementing

Guidance for AI coding agents (and human contributors) investigating M-Bus
decoding behaviour before writing code. This complements `AGENTS.md` /
`CLAUDE.md`; it is about *how to find out* what is correct, not a restatement of
the build commands or conventions there.

wmbusmeters implements the EN 13757-3 / OMS application layer and the M-Bus
data-record format. Correct behaviour is defined by the standards (EN 13757 /
OMS), not by intuition. (libmbus is a useful comparison, but it covers less of
the standard than this project, so it is not authoritative.) When you don't yet
know something — a data type, an encoding, a driver's behaviour, a spec clause
— research it before writing code.

## Sources of truth

1. **This repository** is ground truth for *this project*. Read `src/`,
   `drivers/`, `tests/`, and the `.github/workflows/`. If the repo and your
   memory disagree, trust the repo.
2. **EN 13757** (CEN, paid) — the wM-Bus / M-Bus standards family. Most relevant
   here: EN 13757-3 (application layer, DIF/VIF data records, data types,
   compact profiles), EN 13757-4 (wireless lower layers, frame formats A/B),
   EN 13757-7 (transport & security). See "Specifications & references" in
   `AGENTS.md` for where to look.
3. **OMS** (Open Metering Systems) — the freely available specification derived
   from EN 13757; a practical entry point: https://oms-group.org/
4. **libmbus** (`rscada/libmbus` on GitHub, BSD-3-Clause) — a good open-source
   M-Bus implementation to compare against. wmbusmeters implements *more* of the
   standard than libmbus (notably the wireless parts — compact frames with hash
   signatures, the ELL header), so libmbus is a **comparison, not a reference**.
   Useful for cross-checking M-Bus data-record decoding (`mbus/mbus-protocol.c`);
   not vendored here.

## Discipline

- **Evidence-first.** Tie every factual claim to a specific source: a
  `file:line` in this repo, a clause/table in EN 13757 / OMS, or a function in
  libmbus. A claim with no source is a hypothesis — label it as such.
- **Cite the spec in code.** When implementing spec-defined behaviour, cite the
  clause in a one-line comment, matching the house style already in
  `src/dvparser.cc` / `src/wmbus.cc`, e.g.
  `// EN 13757-3:2018 Annex F.8: …`.
- **Don't invent.** Implement only behaviour backed by the standard (EN 13757 /
  OMS). libmbus is a useful comparison but is not authoritative for this project
  (wmbusmeters covers more of the standard than it does). If you can point to no
  source, leave a `// TODO` and ask before implementing. Do not invent data types,
  encodings, or unit suffixes.
- **Controlled units.** Units are enumerated and controlled
  (`wmbusmeters --listunits`; the table is `LIST_OF_UNITS` in `src/units.h`).
  Add a real unit to that table rather than synthesising or concatenating unit
  strings on the fly.
- **Verify against the repo, not assumptions.** Reproduce a failing case before
  fixing; treat the root cause, not the symptom.
- **Flag the unknowns.** If you cannot verify something, say so and leave a
  `// TODO` rather than guessing.

## Cross-checking decoding

For M-Bus data-record decoding (DIF/VIF, compact profiles, date/time types),
libmbus (`mbus/mbus-protocol.c` and its VIF/VIFE tables) is a useful comparison.
wmbusmeters covers more of the standard than libmbus (e.g. wireless compact
frames with hash signatures, the ELL header), so where they differ this project
may simply handle cases libmbus does not — check the standard rather than
deferring to libmbus.