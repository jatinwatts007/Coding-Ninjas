import java.util.*;
public class Solution {

	public static int burstingBalloons(int[] arr, int n) {
		// Write your code here.
        
        ArrayList<ArrayList<Integer>> lst = new ArrayList<ArrayList<Integer>>();
        int x=0, n2 =0,n3=0,j=0,v=0;
        HashMap<Integer, Integer> map = new HashMap<Integer, Integer>();
        HashMap<Integer, ArrayList<Integer>> m2 = new HashMap<Integer, ArrayList<Integer>>();
        for(int i=0;i<n;i++)
        {
            if(map.containsKey(arr[i]+1))
            {
                if(m2.containsKey(arr[i]+1))
                {
                    x = m2.get(arr[i]+1).get(0);
                    if(m2.get(arr[i]+1).size()==1)
                    {
                        m2.remove(arr[i]+1);
                    }
                    else
                    {
                        m2.get(arr[i]+1).remove(0);
                    }
                    
                    
                }
                else
                {
                    x = map.get(arr[i]+1);
                }
                n3 = lst.get(x).size();
                lst.get(x).add(n3,arr[i]);
                
                if(map.containsKey(arr[i]))
                {
                    if(m2.containsKey(arr[i]))
                    {
                        m2.get(arr[i]).add(x);
                    }
                    else
                    {
                        m2.put(arr[i], new ArrayList<Integer>());
                        m2.get(arr[i]).add(map.get(arr[i]));
                        m2.get(arr[i]).add(x);
                    }
                    if(m2.containsKey(arr[i]+1))
                    {
                        v = m2.get(arr[i]+1).get(0);
                        map.put(arr[i]+1, v);
                    }
                    else
                    {
                        map.remove(arr[i]+1);
                    }
                }
                else
                {
                    if(m2.containsKey(arr[i]+1))
                    {
                        v = m2.get(arr[i]+1).get(0);
                        map.put(arr[i]+1, v);
                    }
                    else
                    {
                        map.remove(arr[i]+1);
                    }
                    
                	map.put(arr[i],x);
                }
                
            }
            else
            {
                n2 = lst.size();
                lst.add(new ArrayList<Integer>());
                lst.get(n2).add(0,arr[i]);
                //map.put(arr[i],n2);
                if(map.containsKey(arr[i]))
                {
                    if(m2.containsKey(arr[i]))
                    {
                        m2.get(arr[i]).add(n2);
                    }
                    else
                    {
                        m2.put(arr[i], new ArrayList<Integer>());
                        m2.get(arr[i]).add(map.get(arr[i]));
                        m2.get(arr[i]).add(n2);
                    }
                }
                else
                {
                	map.put(arr[i],n2);
                }
            }
        }
        return lst.size();
	}
}
