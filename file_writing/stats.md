## writing a file:

|               |    Time Taken (float)    |  Throughput(Mb/s)           |
|    Method     |  1 mb  |  10 mb  |  1 gb  | 1mb   | 10mb  | 1gb  | avg |
|---------------|--------|---------|--------|-------|-------|------|-----|
|    Fread      | 1ms    | 11ms    | 1448ms |1000   |910    |711   | 873 |
| ostream_itr   | 77ms   | 710ms   | 65316ms|13     |14     |15    | 14  |


|               |    Time Taken (int)       |  Throughput(Mb/s)          |
|    Method     |  1 mb  |  10 mb  |  1 gb  | 1mb   | 10mb  | 1gb  | avg |
|---------------|--------|---------|--------|-------|-------|------|-----|
|    Fread      | 1ms    | 11ms    | 1448ms |1000   |910    |711   | 873 |
| ostream_itr   | 46ms   | 388ms   | 42126ms|22     |26     |24    | 24  |
