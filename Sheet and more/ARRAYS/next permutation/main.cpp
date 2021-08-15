/* How I came up with the approach:
 * I chose a 3 digit number and worked it out, I found there is something missing.Then I turned to a more digit number
 * like 4,3,5,2,1 So now I could see where the information was lacking in choosing a smaller number.
 * Let us build the appraoch on this one now -
 * First of all what is the greatest number you can form with above digits- 54321 right ?
 * The pattern here is very naive that is moving from right to left there should only be a digit larger than the previous one.
 * If we fail to satisfy this pattern it means there is a scope of improvement to a larger digit.
 *
 * What needs to be done now:
 * 4 3 5 2 1 --> 4 5 3 2 1 --> 4 5 1 2 3
 * See we first find the index where the pattern fails,by traversing the array from behind. Here we find that 1 2 5
 * and then "3" is that anomalous element.
 * Now we have to find which is the next just smaller element to swap with and then
 * we reverse the array beyond this index.
 **/

class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        int n = nums.size();

        int ano = n-1;

        while(ano>0 && nums[ano]<=nums[ano-1])
            ano--;

        if(ano == 0)
            reverse(nums.begin(),nums.end());
        else
        {
            int pin = n-1;

            while(pin>ano && nums[pin]<=nums[ano-1])
                pin--;

            swap(nums[ano-1],nums[pin]);

            reverse(nums.begin()+ano,nums.end());

        }


    }
};