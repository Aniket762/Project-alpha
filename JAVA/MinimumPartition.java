public class MinimumPartition {
	
	public int calculateMinimumPartition(int[] input) {
		int min = 100000;
		int endIndex = input.length - 1;
		int[] left = new int[endIndex];
		int[] right = new int[endIndex];
		left[0] = input[0];
		right[endIndex - 1] = input[endIndex];
		
		for (int i = 1; i < endIndex; i++) {
			int tempEnd = endIndex - i;
			left[i] = input[i] + left[i - 1];
			right[tempEnd - 1] = right[tempEnd] + input[tempEnd];
		}
		
		for(int i = 0; i < left.length; i++) {
			int temp = Math.abs(left[i] - right[i]);
			if(temp < min) {
				min = temp;
			}
		}
		
		return min;
	}

}