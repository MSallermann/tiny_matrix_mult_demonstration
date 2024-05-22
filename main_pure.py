import random
import time


def generate_random_matrix(rows, cols):
    return [random.random() for _ in range(rows * cols)]


def multiply_matrices(A, B, rowsA, colsA, colsB):
    C = [0] * (rowsA * colsB)

    for i in range(rowsA):
        for j in range(colsB):
            for k in range(colsA):
                C[i * colsB + j] += A[i * colsA + k] * B[k * colsB + j]

    return C


rowsA, colsA, rowsB, colsB = 500, 600, 600, 500
A = generate_random_matrix(rowsA, colsA)
B = generate_random_matrix(rowsB, colsB)

start = time.time()
C = multiply_matrices(A, B, rowsA, colsA, colsB)
end = time.time()

print(f"Time taken: {end - start} seconds")
