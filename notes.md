## Pizzaforces

[Pizzaforces](https://codeforces.com/problemset/problem/1555/A)

for 300 friends, why can't he just order 30 large pizzas?
(30 large pizzas * 10 slices each == 300 slices)

25 minutes each large pizza

25 * 30 = 750 minutes

> so wouldn't the best thing to do to be just be as greedy as possible?
> 
> so the algorithm would be
> 
> * have a list of slices
> * have a list of times
> * for each slice number,
>   * check if there's any remaining slices after being greedy for this one
>     * if no, just return the time
>     * if yes,
>       * set n to the remainder, update time, and go next
> 
> do i need to check if the remainder is equal to n?

so this algorithm doesn't work for the example where n = 12, because
the optimal solution is to have 2 small pizzas, but my algorithm would
go for the medium pizza (8 slices) then the small pizza (6 slices)



maybe there's an algorithm where i can try to get as close as possible to
n with the slices i have?

so at every step, take the path that ...

... or maybe i can just do dfs?

so keep track of:

* ~~pizzaTypesOrdered: the array of numbers of pizza types we ordered~~
  * ~~e.g. 15 small, 10 medium, 13 large~~

We don't need pizzaTypesOrdered anymore because the output is just min mins

* t: the amount of time used so far
  * e.g. 30 mins
* n: the number of remaining friends to serve pizza
  * e.g. 300 friends

algorithm:

* at each step, the base case is when n is less than or equal to 0
  * in that case, add it to a min heap ordered by t
* if we're not at a base case, take a path for each possible pizza type
* at the very end, when every path has been explored, return the top of the
min heap



OK so that didn't work because i didn't get the base case right

it needs to be instead, something like -

> when n - slices[i] is less than or equal to 0

and then also i just need to return when it's less than 0



so i fixed the base case but it still doesn't work because it takes too long
for 300. how can i prune the search tree pre-emptively? how do i know when
the path i'm taking isn't the right path?

maybe i should try that greedy solution just to see what happens
