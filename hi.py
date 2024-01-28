for i in range(m):
    z_i = np.dot(X[i], w) + b
    f_b = sigmoid(z_i)
    dj_db_i = f_b - y[i]
    dj_db += dj_db_i
         for j in range(n):
            dj_dw[j] += dj_db*X[i,j]

dj_dw/=m
dj_db/=m