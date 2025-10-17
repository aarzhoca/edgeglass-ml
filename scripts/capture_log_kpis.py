#!/usr/bin/env python3
"""Parse device logs and emit latency/FPS KPIs as CSV (stub)."""
import sys, re, csv
rx = re.compile(r"TS=(\\d+)ms.*FPS=(\\d+).*lat=(\\d+)ms")
w = csv.writer(sys.stdout); w.writerow(["ts_ms","fps","lat_ms"])
for line in sys.stdin:
    m = rx.search(line)
    if m: w.writerow([m.group(1), m.group(2), m.group(3)])
