# Ola Platform: A Comprehensive APS Portfolio

**Course Name**  
Algorithmic Problem Solving

**Course Code**  
23ECSE309

**Name**  
Omkargouda S Police Patil

**University**  
KLE Technological University, Hubballi-31

**Course Instructor**  
Prakash Hegade

**Portfolio Domain selected**  
OLA

* * *
**A Step Towards Enhanced Service Management on Ola**
* * *

### This page hosts:

1. **🚀Introduction**

2. **❓Need of Portfolio**

3. **🎯Objectives**

4. **🛠️Business Use Cases**

5. **🧠Learnings and Key Takeaways**

## 🚀Introduction

  Ola is a leading ride-hailing service, providing a platform for booking rides conveniently and efficiently. In today’s day and age, the efficiency and effectiveness of ride-hailing services can be significantly enhanced through the strategic application of data structures and algorithms. This portfolio project delves into the core functionalities of Ola’s diverse services, applying the theoretical knowledge and practical skills acquired from the course Algorithmic Problem Solving (APS). By using advanced algorithmic techniques and data structures, this project aims to propose solutions to real-world business applications. From optimizing ride allocation algorithms for improved efficiency and speed to enhancing route planning for better accuracy and reduced travel time, the potential for enhancement is vast.

  This portfolio showcases how algorithms can be applied within Ola’s ecosystem. Each use case illustrates how specific DSA principles can solve practical challenges faced by a ride-hailing service like Ola, bridging the gap between theory and application. Explore the use cases to see how DSA and Algorithmic Problem Solving techniques are used to enhance performance, reliability, and efficiency in a real-world context.

<div style="text-align: center;">
  <img src="https://github.com/omkar3060/omkar3060.github.io/assets/153345475/ca072089-bfed-42a2-9ba2-b893015afd98" alt="Ola Ride-Hailing" style="width: 50%; height: 240px;" />
</div>


## ❓Need of Portfolio

The ever-evolving landscape of ride-hailing services necessitates continual improvements in service management and user experience. Ola, as a leading player in this industry, faces various operational challenges that can be addressed through the strategic application of data structures and algorithms. This portfolio is essential for several reasons. Firstly, optimizing service efficiency is crucial; efficient ride allocation and route planning can minimize wait times and maximize resource utilization. By exploring advanced algorithmic solutions, this portfolio aims to enhance these processes, resulting in a more streamlined and efficient service. Additionally, the transition from theoretical knowledge to practical application is a critical step in the learning process. This portfolio provides an opportunity to apply concepts learned in Data Structures and Algorithms (DSA) and Algorithmic Problem Solving (APS) courses to real-world problems, thereby solidifying understanding and skills.

## 🎯Objectives

**1.** Apply theoretical concepts learnt from Data Structures and Algorithms (DSA) and Algorithmic Problem Solving (APS) courses to practical, real-world problems within the Ola platform.

**2.** Address specific business challenges faced by Ola through the application of algorithmic problem-solving.

**3.** Explore and implement algorithmic solutions that ensure streamlined and efficient services within Ola’s ecosystem.

## 🛠️Business Use Cases

### 1. **Route Optimization**

  Shortest path algorithms like **Dijkstra's algorithm** can be used to compute the shortest path from a driver's current location to the passenger's pickup point and from there to the destination. This ensures that the driver takes the most efficient route, reducing travel time and fuel consumption. As traffic conditions change, Dijkstra's algorithm can be re-run to adjust routes dynamically. This helps in avoiding congested areas and finding the quickest path based on current traffic data. 
  
**Limitations**: Dijkstra's algorithm finds the shortest path from a single source to all other nodes, which can be limiting if multiple source-destination pairs need to be considered simultaneously. <br>
 - Also, Dijkstra's algorithm does not handle negative edge weights, making it unsuitable for scenarios where such weights might be necessary(e.g., discounts or incentives). 

  The **Bellman-Ford algorithm** can handle graphs with negative edge weights, making it suitable for scenarios where the cost of travel between locations can fluctuate and potentially be negative. It can be used to find the shortest path from a single source to all other nodes in smaller networks where negative weights are present. Given the nature of Ola's ride-hailing platform, which requires real-time updates, efficient route planning, and dynamic adjustments in a large urban environment, Dijkstra's Algorithm is generally the most suitable choice.

**Limitations**:  It has a time complexity of O(V * E), which is significantly higher than Dijkstra's for large graphs, making it less efficient for large-scale real-time applications(which is essentially what OLA is).

**Design Techniques and Performance Analysis:**
- **Dijkstra's Algorithm:** Greedy approach
  - Time Complexity: O((V + E) log V) where V is the number of vertices and E is the number of edges
  - Space Complexity: O(V) where V is the number of vertices<br>
- **Bellman-Ford Algorithm:** Dynamic programming
  - Time Complexity: O(VE) where V is the number of vertices and E is the number of edges
  - Space Complexity: O(V) where V is the number of vertices<br>

[Here is my code for Dijkstra's algorithm](https://github.com/omkar3060/omkar3060.github.io/blob/main/codes/dijkstra.c){:target="_blank"}<br>
[Here is my code for Bellman-Ford's algorithm](https://github.com/omkar3060/omkar3060.github.io/blob/main/codes/bellman_ford.cpp){:target="_blank"}<br>

  
### 2. **Scheduling and Shift Management**

  The **Assignment Problem** can be applied to create optimal schedules for drivers, ensuring that there are always enough drivers available to meet demand at different times of the day. We can assign drivers to shifts in a way that balances workload and minimizes idle time. We can create a cost matrix where rows represent drivers and columns represent shifts. Costs can be based on driver preferences, availability, and historical performance. The assignment problem can also be used for **Driver-Passenger Matching** by treating each ride request and available driver as tasks and agents, respectively. It can be used to minimize the total cost, which is a combination of factors such as waiting time, travel distance, previously given ratings by the passenger to the driver and fuel consumption. The goal is to match each passenger with the most suitable driver.

**Limitations**: As the number of drivers increases, the size of the cost matrix grows, leading to increased computational complexity and drivers may have preferences or constraints (e.g., preferred areas, shift timings) that are difficult to model in a standard cost matrix.

**Design Techniques and Performance Analysis:**
- **Assignment Problem:** Optimization technique
- Time Complexity: O(2<sup>N</sup> * N) where N is the number of tasks or resources
- Space Complexity: O(N<sup>2</sup>) where N is the number of tasks or resources

[Here is my code for Assignment problem](https://github.com/omkar3060/omkar3060.github.io/blob/main/codes/assignment_problem.cpp){:target="_blank"}<br>

### 3. **Autocomplete for Pickup and Drop Locations** 

  The **Trie** data structure can be used for implementing autocomplete functionalities, especially when we need to manage and suggest a large number of strings, such as addresses or location names. In the context of Ola's ride-hailing platform, using a Trie can significantly enhance the user experience by providing quick and relevant suggestions as users type their pickup and drop-off locations. Tries can be more space-efficient than storing all strings separately, especially when there are many common prefixes. 
  
  **Limitations**: Tries can still consume a significant amount of memory, especially if the dataset is very large and there are many unique strings. Also, in a dynamic environment where new addresses and locations are frequently added or updated, maintaining the Trie efficiently can be challenging. 
  
  While there are challenges in terms of memory usage and implementation complexity, the benefits of speed and efficient prefix matching make Tries a suitable choice for this functionality. 
  
  If there are string with common prefixes, then **Radix tree** can be used as it is particularly useful for storing strings with common prefixes efficiently. It reduces space complexity by merging nodes with single children into a single node.
  
[Here is my code to insert and search a word in trie](https://github.com/omkar3060/omkar3060.github.io/blob/main/codes/trie.cpp){:target="_blank"}<br>

**Design Techniques and Performance Analysis:**
- **Tries:** Tree data structure, Prefix tree
  - Time Complexity: O(L) for insertion, deletion, and lookup operations, where L is the length of the key
  - Space Complexity: O(ALPHABET_SIZE * L) where ALPHABET_SIZE is the number of possible characters and L is the length of the key


### 4. **Ride Reviews and Ratings**

  **Segment Trees** can be used to manage and retrieve reviews based on their timestamps. Segment trees allow efficient querying of reviews within a specific time range, which is useful for displaying recent reviews and ratings first. 
  
  **Limitations**: Segment Trees require more memory, which can be significant for large datasets and insertion and deletion is costly as we need to recreate the whole tree. 
  
  Despite of these disadvantages, Segment trees can be used for this usecase.

**Design Techniques and Performance Analysis:**
- **Segment Trees:** Divide and conquer
  - Time Complexity: O(log N) for both query and update operations, where N is the number of elements
  - Space Complexity: O(N) where N is the number of elements
  
[Here is my code for Segment trees](https://github.com/omkar3060/omkar3060.github.io/blob/main/codes/segment_tree.cpp){:target="_blank"}<br>


### 5. **Cumulative Earnings and Real-Time Updates**

  **Fenwick Trees/Binary Indexed Trees(BIT)** can be used for managing and querying cumulative earnings of drivers or total rides completed over time. This requires efficient prefix sum queries and point updates. Fenwick Trees are easier to implement and understand compared to Segment Trees. They require less space, typically using O(N) space compared O(4*N) in segment trees. 
  
**Limitations**: Fenwick Trees are not well-suited for range updates; they can handle point updates efficiently but range updates are more complex and less efficient.<br> 
- They are limited in the types of range queries they can handle directly. They are primarily designed for prefix sums and cannot be easily adapted for other operations like min, max, or GCD without significant modifications.
  
  Despite of these disadvantages, Fenwick trees can be used for this usecase.

**Design Techniques and Performance Analysis:**
- **BITs:** Divide and conquer
  - Time Complexity: O(N log N) for construction,O(log N) for update and query operations where N is the number of elements
  - Space Complexity: O(N)
  
[Here is my code for Fenwick trees](https://github.com/omkar3060/omkar3060.github.io/blob/main/codes/BIT.cpp){:target="_blank"}<br>

### 6. **Driver Onboarding and Training Workflow**

  When a new driver joins Ola, there is a structured process they must follow, including background checks, vehicle inspections, training modules, and document verification. Each step must be completed before proceeding to the next. Each task can be represented as a node in a DAG, with edges indicating dependencies and **Topological sort** can be used as it will provide an ordered sequence of tasks for efficient onboarding.

**Design Techniques and Performance Analysis:**
- **Topological Sort:** Depth-first search (DFS)
  - Time Complexity: O(V + E), where V is the number of vertices (tasks) and E is the number of edges (dependencies) in the DAG
  - Space Complexity: O(V + E) for storing the graph and additional structures
  
[Here is my code for Topological Sort](https://github.com/omkar3060/omkar3060.github.io/blob/main/codes/topo_sort.cpp){:target="_blank"}<br>

### 7. **Ride History and User Data**

  **Skip Lists** can be used to store and access user ride history and other personal data sorted by timestamps. This allows for efficient querying of historical rides within a certain time range or retrieving the most recent rides quickly. This improves the responsiveness of the application, providing users with a seamless experience when viewing their ride history or account details. 

  **Limitations**: Skip Lists require additional pointers for each level in the list, which increases memory usage compared to simpler data structures like arrays or linked lists.<br>
  - Also, the performance of Skip Lists depends on the randomization process used for balancing.<br>
  - While they offer good average-case performance (O(log n)), worst-case performance can still be linear in some scenarios.

**Design Techniques and Performance Analysis:**
- **Skip Lists:** Probabilistic balancing
  - Time Complexity: O(log n) on average for search, insertion, and deletion, where n is the number of elements in the list
  - Space Complexity: O(n), where n is the number of elements in the skip list
  
[Here is my code for Skip Lists](https://github.com/omkar3060/omkar3060.github.io/blob/main/codes/skiplist.cpp){:target="_blank"}<br>

### 8. **Data Transmission**

  **Huffman Coding** can be used to compress ride data, such as ride logs, user reviews, and feedback. By encoding frequently occurring data with shorter bit lengths, Ola can reduce the storage requirements for their databases. Also, Compressing data before transmission between servers or to users’ devices can save bandwidth and **reduce transmission time**.

**Design Techniques and Performance Analysis:**
- **Huffman Coding:** Greedy approach
  - Time Complexity: O(n log n) for building the Huffman tree, where n is the number of symbols
  - Space Complexity: O(n) for storing the Huffman tree and encoded data

[Here is my code for Huffman Coding](https://github.com/omkar3060/omkar3060.github.io/blob/main/codes/huffman_encoding.cpp){:target="_blank"}<br>

### 9. **Route Suggestions**

  **Depth-First Search (DFS)** can be used to explore all possible paths from a rider’s current location to their destination, helping in scenarios where finding all potential routes is beneficial, such as suggesting scenic or alternate routes. 
  
  **Limitations**: DFS does not always find the shortest or most efficient path, especially in large, complex networks. Shortest path algorithms can be used to do the same.
  
  **Breadth-First Search (BFS)** can also be used for finding the shortest path in an unweighted graph. When mapping out possible routes, BFS can quickly determine the shortest path from the pickup point to the drop-off location.

**Design Techniques and Performance Analysis:**
- **DFS:** Graph traversal based on stack
  - Time Complexity: O(V + E), where V is the number of vertices (nodes) and E is the number of edges in the graph
  - Space Complexity: O(V) 
- **BFS:** Graph traversal based on queue
  - Time Complexity: O(V + E), where V is the number of vertices (nodes) and E is the number of edges in the graph
  - Space Complexity: O(V)

[Here is my code for DFS](https://github.com/omkar3060/omkar3060.github.io/blob/main/codes/dfs.c){:target="_blank"}<br>
[Here is my code for BFS](https://github.com/omkar3060/omkar3060.github.io/blob/main/codes/bfs.c){:target="_blank"}<br>

### 10. **Infrastructure Planning and Network Expansion**

  For planning the expansion of Ola’s service areas, **Spanning Tree algorithms** such as **Kruskal's** and **Prim's** can help identify the most cost-effective way to connect new service zones to the existing network. By finding the MST, Ola can minimize the infrastructure costs required to expand services. 
  
  **Limitations**: These algorithms provide a static solution and might need additional heuristics to handle real-world complexities like varying demand and geographical constraints.

**Design Techniques and Performance Analysis**:
- **Kruskal's Algorithm**: Greedy approach
  - Time Complexity: \(O(E log E)\)
  - Space Complexity: \(O(V + E)\)<br>
- **Prim's Algorithm**: Greedy approach
  - Time Complexity: \(O(E log V)\) with priority queues (or \(O(E + V log V)\) with Fibonacci heaps)
  - Space Complexity: \(O(V + E)\)

[Here is my code for kruskal's algorithm](https://github.com/omkar3060/omkar3060.github.io/blob/main/codes/kruskal.c){:target="_blank"}<br>
[Here is my code for Segment trees](https://github.com/omkar3060/omkar3060.github.io/blob/main/codes/prim.cpp){:target="_blank"}<br>

### 11. **Spell Checking for Location Inputs**

  **Edit distance** algorithm can be used in Ola's ride-hailing platform to enhance spell-checking systems for location inputs. They help identify and correct misspelled pickup and drop-off locations by suggesting replacements with the minimum number of edits required.

**Design Techniques and Performance Analysis:**
- **Edit Distance:** Dynamic programming
  - Time Complexity: O(m*n), where m and n are the lengths of the two strings being compared
  - Space Complexity: O(m*n), where m and n are the lengths of the two strings being compared

[Here is my code for Edit distance algorithm](https://github.com/omkar3060/omkar3060.github.io/blob/main/codes/edit_distance.cpp){:target="_blank"}<br>

### 12. **Optimizing Multi-Passenger Ride Sharing**

  The **Traveling Salesman Problem(TSP)** can be used to optimize routes for ride-sharing services where multiple passengers with different pickup and drop-off points share a single ride. As a result, we can determine the shortest route that covers all passengers' locations, minimizing travel time and fuel consumption.

  **Limitations**: Real-time changes such as new ride requests or cancellations require re-solving the TSP, which can be computationally intensive as the algorithm's time complexit is O(n!).

**Design Techniques and Performance Analysis:**
- **TSP**: Dynamic programming
  - Time Complexity: O(n!) where n is the number of vertices in the graph
  - Space Complexity: O(n) as we are using a vector to store all the vertices.

[Here is my code for the TSP](https://github.com/omkar3060/omkar3060.github.io/blob/main/codes/TSP.cpp){:target="_blank"}<br>

### 13. **Managing Peak Demand and Load Balancing**

  During peak hours, the **Ford-Fulkerson algorithm** can help manage and balance the load by optimizing the distribution of ride requests across available drivers. By ensuring that the flow of requests does not exceed the capacity of drivers, Ola can maintain service quality.

  **Limitations**: Managing vast network traffic, and minimizing congestion can be quite challenging.

**Design Techniques and Performance Analysis:**
- **Ford-Fulkerson Algorithm:** Augmenting path method, Greedy approach
  - Time Complexity: O(E * V<sup>2</sup>) where E is the number of edges and V is the number of vertices
  - Space Complexity: O(V<sup>2</sup>) where V is the number of vertices<br>


[Here is my code for the Ford-Fulkerson algorithm](https://github.com/omkar3060/omkar3060.github.io/blob/main/codes/fordfulkerson.cpp){:target="_blank"}<br>
  
### 14. **Critical Routes Identification**

  **Bridges** in a graph can be used to identify critical routes or roads in a city's transportation network. These routes are vital for maintaining connectivity between different areas. By identifying these bridges, Ola can ensure that these routes are well monitored to prevent disruptions in service.

  **Limitations**: The transportation network is dynamic, with new roads being built and old ones being closed. Regular updates to the graph are necessary to maintain accurate bridge identification.

**Design Techniques and Performance Analysis**:
  - **Bridges**: Based on modified DFS.
    - Time Complexity: \(O(V + E)\)
    - Space Complexity:\(O(V + E)\)

[Here is my code for finding bridges in a graph](https://github.com/omkar3060/omkar3060.github.io/blob/main/codes/bridge.cpp){:target="_blank"}<br>

### 15. **Targeted Marketing**

  By analyzing strongly connected components using algorithms like **Kosaraju's or Tarjan's**, we can analyze travel patterns to identify user clusters with similar preferences or behaviors, enabling targeted marketing campaigns and promotions. While both algorithms have similar time complexities, Tarjan's algorithm is generally preferred for its simplicity and single traversal requirement.

**Design Techniques and Performance Analysis**:
- **Kosaraju's Algorithm**: Two-phase DFS (original and transposed graph).
- **Tarjan's Algorithm**: Single DFS pass with backtracking.
  - Time Complexity: O(V + E)
  - Space Complexity: O(V)

[Here is my code for Kosaraju's algorithm](https://github.com/omkar3060/omkar3060.github.io/blob/main/codes/kosaraju.cpp){:target="_blank"}<br>
[Here is my code for Tarjan's algorithm](https://github.com/omkar3060/omkar3060.github.io/blob/main/codes/tarjan.cpp){:target="_blank"}<br>

### 16. **User Authentication and Data Security**

  **Hashing** algorithms can help in securely storing user passwords which helps to protects user passwords from being easily compromised. Even if the database is leaked, hashed passwords are difficult to reverse-engineer. Hashing is also used in encryption, digital signatures, and data integrity checks to secure sensitive information against unauthorized access.

  **Limitations**: Many hashing algorithms are not collision-resistant and can be vulnerable to attacks, so stronger algorithms like SHA-512 are preferable.

[Here is my code for a simple Hashing algorithm](https://github.com/omkar3060/omkar3060.github.io/blob/main/codes/hash.cpp){:target="_blank"}<br>

### 17. **Search Indexing using BSTs**

**Binary Search Trees (BSTs)** Binary Search Trees (BSTs) can be utilized in Ola's ride-hailing platform to efficiently store and retrieve indexed locations, such as popular pickup and drop-off points. By organizing these indexed locations in BSTs, Ola can quickly search for relevant locations based on user input or other search criteria, enabling fast and accurate retrieval of location suggestions. 

**Limitations**: Standard BSTs can become unbalanced with skewed data, leading to inefficient search times. This can be mitigated by using self-balancing trees like **Red-Black Trees**.

**Design Techniques and Performance Analysis**:
- **Binary Search Trees**: Binary search algorithm, for efficient data retrieval.
  - **Time Complexity**: \(O(\log n)\) on average for search, insertion, and deletion. \(O(n)\) in the worst-case scenario.
  - **Space Complexity**: \(O(n)\)
- **Red-Black Trees:** Balanced binary search tree
  - Time Complexity: O(log N) for insertion, deletion, and lookup operations, where N is the number of elements
  - Space Complexity: O(N) where N is the number of elements

[Here is my code for BST](https://github.com/omkar3060/omkar3060.github.io/blob/main/codes/bst.c){:target="_blank"}<br>
[Here is my code for Red-Black tree](https://github.com/omkar3060/omkar3060.github.io/blob/main/codes/red_black_tree.c){:target="_blank"}<br>

### 18. **User Preference Analysis**

  Using **Longest Common Subsequence (LCS)**, we can analyzie user preferences by comparing the sequences of services or options they have chosen in the past. For example, if a user consistently prefers certain car types or services, LCS can help identify these preferences and tailor recommendations accordingly.

  **Limitations**: LCS is useful for identifying patterns in sequential data but may not be as effective for non-sequential or more complex data relationships.
  - LCS has a time complexity of O(m*n), where m and n are the lengths of the sequences. For large datasets, this can become computationally intensive.

**Design Techniques and  Performance Analysis**:
- **LCS**: Dynamic Programming
  - Time Complexity: \(O(m*n)\), where m and n are lengths of sequences.
  - Space Complexity: \(O(m*n)\) for storing the LCS table.

[Here is my code for LCS algorithm](https://github.com/omkar3060/omkar3060.github.io/blob/main/codes/LCS.cpp){:target="_blank"}<br>

### 19. **Database Indexing**

  **Red-Black** Trees are ideal for indexing and organizing location data, such as pickup and drop-off points. They ensure balanced search trees, allowing for quick retrieval of locations based on various search criteria (e.g., proximity, popularity).
  
**Design Techniques and  Performance Analysis**:
- **Red-Black Trees:** Balanced binary search tree
  - Time Complexity: O(log N) for insertion, deletion, and lookup operations, where N is the number of elements
  - Space Complexity: O(N) where N is the number of elements

[Here is my code for Red-Black tree](https://github.com/omkar3060/omkar3060.github.io/blob/main/codes/red_black_tree.c){:target="_blank"}<br>

### 20. **Location Caching**

  **Bloom filters** can be used to cache frequently searched locations, allowing the system to quickly determine if a location is popular without querying the main database and give recommendations to users based on that.

  **Limitations**: Bloom filters can return false positives, indicating that a location is in the cache when it is not. This can lead to occasional additional database queries.
  - Standard Bloom filters do not support deletion of elements, which means they cannot easily handle dynamic changes in the set of frequently searched locations.

[Here is my code for Bloom filter](https://github.com/omkar3060/omkar3060.github.io/blob/main/codes/bloom_filter.cpp){:target="_blank"}<br>

### 21. **Efficient Data Management**

  Ola's ride-hailing platform can make use of **B+ tree** data structures for indexing and organizing vast amounts of data efficiently. B+ trees provide **logarithmic** time complexity for search, insertion, and deletion operations, making them ideal for handling structured data in a scalable and efficient manner.

[Here is my code for B+ trees](https://github.com/omkar3060/omkar3060.github.io/blob/main/codes/b+_tree.cpp){:target="_blank"}<br>

## 🧠Learnings and Key Takeaways

  This portfolio demonstrates how selecting appropriate data structures and algorithms can address specific business challenges across various domains. Each use case details the application of suitable algorithms, outlines the challenges, highlights the benefits, and emphasizes design techniques. It shows how algorithms learned in APS and DSA classes can be directly applied to practical problems and focuses on efficiency and practicality.

  By linking theory to practice, this portfolio provides insights into choosing the best solutions for real-world issues. It illustrates the significant impact that well-chosen algorithms and data structures can have on improving services and emphasizes the importance of understanding these concepts to drive innovation and efficiency.








  


  







