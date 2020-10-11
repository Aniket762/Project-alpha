import java.util.*;

public class MergeSort {

	public static Integer[] mergeSort(Integer[] array) {
		if (array.length <= 1) {
			return array;
		}

		Integer[] left = new Integer[array.length / 2];
		Integer[] right = new Integer[array.length - left.length];
		System.arraycopy(array, 0, left, 0, left.length);
		System.arraycopy(array, left.length, right, 0, right.length);
		mergeSort(left);
		mergeSort(right);
		merge(left, right, array);
		return array;
	}

	private static void merge(Integer[] left, Integer[] right, Integer[] result) {
		int leftPos = 0;
		int rightPos = 0;
		int mergedPos = 0;

		while (leftPos < left.length && rightPos < right.length) {
			if (left[leftPos].compareTo(right[rightPos]) < 0) {
				result[mergedPos] = left[leftPos];
				leftPos++;
			} else {
				result[mergedPos] = right[rightPos];
				rightPos++;
			}
			mergedPos++;
		}
		System.arraycopy(left, leftPos, result, mergedPos, left.length - leftPos);
		System.arraycopy(right, rightPos, result, mergedPos, right.length - rightPos);
	}

	public static void main(String[] args) {
		Integer[] a = { 100, 91, 95, 94, 93, 96, 92, 99, 98, 97 };
		mergeSort(a);
		System.out.println(Arrays.toString(a));
	}
}