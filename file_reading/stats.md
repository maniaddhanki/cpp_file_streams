## Reading a file:

|    Method     |  1 mb  |  10 mb  |  1 gb  | 1mb   | 10mb  | 1gb  | avg |
|               |    Time Taken (string)    |  Throughput(Mb/s)          |
|---------------|--------|---------|--------|-------|-------|------|-----|
|    Fread      | 0ms    | 7ms     | 700ms  |1245.3 |1428.5 |1462.8|1378 |
|  ifstream     | 1ms    | 11ms    | 1000ms | 1000  | 909   | 1024 | 978 |
| istream iter  | 6ms    | 60ms    | 4550ms | 167   | 167   | 225  | 187 |
|   assign      | 6ms    | 60ms    | 4570ms | 167   | 167   | 215  | 183 |
|   copy        | 6ms    | 60ms    | 4550ms | 167   | 167   | 225  | 187 |
|  read buffer  | 8ms    | 71ms    | 6130ms | 125   | 140   | 167  | 144 |


|               |    Time Taken (float)     |  Throughput(Mb/s)          |
|    Method     |  1 mb  |  10 mb  |  1 gb  | 1mb   | 10mb  | 1gb  | avg |
|---------------|--------|---------|--------|-------|-------|------|-----|
|    Fread      | 0ms    | 2ms     | 650ms  |1245.3 |1428.5 |1462.8|1378 |

|               |    Time Taken (int)       |  Throughput(Mb/s)          |
|    Method     |  1 mb  |  10 mb  |  1 gb  | 1mb   | 10mb  | 1gb  | avg |
|---------------|--------|---------|--------|-------|-------|------|-----|
|    Fread      | 0ms    | 1ms     | 650ms  |1245.3 |1428.5 |1462.8|1378 |
