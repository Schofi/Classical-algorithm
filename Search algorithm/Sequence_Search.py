def Sequence_Search(nums,target):
	if len(nums)==0:
		return False
	for i in range(len(nums)):
		if nums[i]==target:
			return True
	return False
