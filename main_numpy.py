import numpy as np
import time

rowsA, colsA, rowsB, colsB = 500, 600, 600, 500
A = np.array(np.random.rand(rowsA, colsA), dtype=np.float64)
B = np.array(np.random.rand(rowsB, colsB), dtype=np.float64)

start = time.time()
C = A @ B
end = time.time()

print(f"Time taken: {end - start} seconds")
