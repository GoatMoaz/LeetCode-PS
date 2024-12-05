class Solution {
public:
    bool canChange(string start, string target) {
        int size=start.size() , start_idx=0 , target_idx=0;
        while(start_idx <= size && target_idx <= size){
            while(start_idx < size && start[start_idx]=='_')
                start_idx++;
            while(target_idx < size && target[target_idx]=='_')
                target_idx++;
            if (start[start_idx] != target[target_idx])
                return false;
            if(target_idx==size || start_idx==size)
                return start_idx==size && target_idx==size;
            if(start[start_idx] == 'R' && start_idx > target_idx)
                return false;
            if(start[start_idx] == 'L' && start_idx < target_idx)
                return false;
            start_idx++,target_idx++;
        }
        return true;
    }
};