def maxSum3NonConsecSequence(arr, n):
	sum = [0 for i in range(n)]

	sum[0] = arr[0]
	sum[1] = arr[0] + arr[1]
	sum[2] = max(sum[1], arr[1]+arr[2])

	for i in range(3,n):
		sum[i] = max(max(sum[i-1], sum[i-2]+arr[i]), arr[i]+arr[i-1]+sum[i-3])

	return sum[n-1]

n = len(arr)
print maxSum3NonConsecSequence(arr, n)