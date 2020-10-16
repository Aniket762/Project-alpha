import java.util.Arrays;

public class MinimumPartition {
	
	public static int calculateMinimumPartition(int[] input) {
		int min = 100000;
		Arrays.sort(input);
		int endIndex = input.length - 1;
		int[] rest = new int[endIndex];
		int[] right = new int[endIndex];

		right[endIndex - 1] = input[endIndex] + input[0];
		rest[endIndex - 1] = Arrays.stream(input).sum() - right[endIndex - 1];

		for (int i = 1; i < endIndex; i++) {
			int tempEnd = endIndex - i;
			right[tempEnd - 1] = right[tempEnd] + input[i];
			rest[tempEnd - 1] = rest[tempEnd] - input[i];
		}
		
		for(int i = 0; i < rest.length; i++) {
			int temp = Math.abs(rest[i] - right[i]);
			if(temp < min) {
				min = temp;
			}
		}
		
		return min;
	}

}