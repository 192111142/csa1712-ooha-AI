python program for transpose of a matrice


lines (10 sloc)  409 Bytes

def transposeMatrix(matrix):
    transposed_matrix = [[0 for row in range(len(matrix))] for col in range(len(matrix[0]))]
    for i in range(len(matrix)):
        for j in range(len(matrix[0])):
            transposed_matrix[j][i] = matrix[i][j]
    return transposed_matrix

matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
transposed_matrix = transposeMatrix(matrix)

for row in transposed_matrix:
    print(row



