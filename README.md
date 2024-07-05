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

1. **Introduction**

2. **Need of Portfolio**

3. **Objectives**

4. **Data Structures and Algorithms applicable**

## Introduction

  Ola is a leading ride-hailing service, providing a platform for booking rides conveniently and efficiently. In today’s day and age, the efficiency and effectiveness of ride-hailing services can be significantly enhanced through the strategic application of data structures and algorithms. This portfolio project delves into the core functionalities of Ola’s diverse services, applying the theoretical knowledge and practical skills acquired from the course Algorithmic Problem Solving (APS). By using advanced algorithmic techniques and data structures, this project aims to propose solutions to real-world business applications. From optimizing ride allocation algorithms for improved efficiency and speed to enhancing route planning for better accuracy and reduced travel time, the potential for enhancement is vast.

  This portfolio showcases how algorithms can be applied within Ola’s ecosystem. Each use case illustrates how specific DSA principles can solve practical challenges faced by a ride-hailing service like Ola, bridging the gap between theory and application. Explore the use cases to see how DSA and Algorithmic Problem Solving techniques are used to enhance performance, reliability, and efficiency in a real-world context.

## Need of Portfolio

The ever-evolving landscape of ride-hailing services necessitates continual improvements in service management and user experience. Ola, as a leading player in this industry, faces various operational challenges that can be addressed through the strategic application of data structures and algorithms. This portfolio is essential for several reasons. Firstly, optimizing service efficiency is crucial; efficient ride allocation and route planning can minimize wait times and maximize resource utilization. By exploring advanced algorithmic solutions, this portfolio aims to enhance these processes, resulting in a more streamlined and efficient service. Additionally, the transition from theoretical knowledge to practical application is a critical step in the learning process. This portfolio provides an opportunity to apply concepts learned in Data Structures and Algorithms (DSA) and Algorithmic Problem Solving (APS) courses to real-world problems, thereby solidifying understanding and skills.

## Objectives

**1.** Apply theoretical concepts from Data Structures and Algorithms (DSA) and Algorithmic Problem Solving (APS) courses to practical, real-world problems within the Ola platform.

**2.** Address specific business challenges faced by Ola through the application of algorithmic problem-solving.

**3.** Explore and implement algorithmic solutions that ensure streamlined and efficient services within Ola’s ecosystem.

## Data Structures and Algorithms applicable

### 1. **Route Optimization**

  Shortest path algorithms like **Dijkstra's algorithm** can be used to compute the shortest path from a driver's current location to the passenger's pickup point and from there to the destination. This ensures that the driver takes the most efficient route, reducing travel time and fuel consumption. As traffic conditions change, Dijkstra's algorithm can be re-run to adjust routes dynamically. This helps in avoiding congested areas and finding the quickest path based on current traffic data. But, Dijkstra's algorithm finds the shortest path from a single source to all other nodes, which can be limiting if multiple source-destination pairs need to be considered simultaneously. Also, Dijkstra's algorithm does not handle negative edge weights, making it unsuitable for scenarios where such weights might be necessary(e.g., discounts or incentives). 

  The **Bellman-Ford algorithm** can handle graphs with negative edge weights, making it suitable for scenarios where the cost of travel between locations can fluctuate and potentially be negative. It can be used to find the shortest path from a single source to all other nodes in smaller networks where negative weights are present. However, it has a time complexity of O(V * E), which is significantly higher than Dijkstra's for large graphs, making it less efficient for large-scale real-time applications(which is essentially what OLA is). Given the nature of Ola's ride-hailing platform, which requires real-time updates, efficient route planning, and dynamic adjustments in a large urban environment, Dijkstra's Algorithm is generally the most suitable choice.

[Here is my code for Dijkstra's algorithm](https://github.com/omkar3060/omkar3060.github.io/blob/main/codes/dijkstra.c){:target="_blank"}<br>
[Here is my code for Bellman-Ford's algorithm](https://github.com/omkar3060/omkar3060.github.io/blob/main/codes/bellman_ford.cpp){:target="_blank"}<br>

  
### 2. **Scheduling and Shift Management**

  The **Assignment Problem** can be applied to create optimal schedules for drivers, ensuring that there are always enough drivers available to meet demand at different times of the day. We can assign drivers to shifts in a way that balances workload and minimizes idle time. We can create a cost matrix where rows represent drivers and columns represent shifts. Costs can be based on driver preferences, availability, and historical performance. But, as the number of drivers increases, the size of the cost matrix grows, leading to increased computational complexity and drivers may have preferences or constraints (e.g., preferred areas, shift timings) that are difficult to model in a standard cost matrix. The assignment problem can also be used for **Driver-Passenger Matching** by treating each ride request and available driver as tasks and agents, respectively. It can be used to minimize the total cost, which is a combination of factors such as waiting time, travel distance, previously given ratings by the passenger to the driver and fuel consumption. The goal is to match each passenger with the most suitable driver.

[Here is my code for Assignment problem](https://github.com/omkar3060/omkar3060.github.io/blob/main/codes/assignment_problem.cpp){:target="_blank"}<br>

### 3. **Autocomplete for Pickup and Drop Locations** 

  The **Trie** data structure can be used for implementing autocomplete functionalities, especially when we need to manage and suggest a large number of strings, such as addresses or location names. In the context of Ola's ride-hailing platform, using a Trie can significantly enhance the user experience by providing quick and relevant suggestions as users type their pickup and drop-off locations. Tries can be more space-efficient than storing all strings separately, especially when there are many common prefixes. But they can still consume a significant amount of memory, especially if the dataset is very large and there are many unique strings. Also, in a dynamic environment where new addresses and locations are frequently added or updated, maintaining the Trie efficiently can be challenging. While there are challenges in terms of memory usage and implementation complexity, the benefits of speed and efficient prefix matching make Tries a suitable choice for this functionality. If there are string with common prefixes, then **Radix tree** can be used as it is particularly useful for storing strings with common prefixes efficiently. It reduces space complexity by merging nodes with single children into a single node.
[Here is my code to insert and search a word in trie](https://github.com/omkar3060/omkar3060.github.io/blob/main/codes/trie.cpp){:target="_blank"}<br>


### 4. **Ride Reviews and Ratings**

  **Segment Trees** can be used to manage and retrieve reviews based on their timestamps. Segment trees allow efficient querying of reviews within a specific time range, which is useful for displaying recent reviews and ratings first. But, Segment Trees require more memory, which can be significant for large datasets and insertion and deletion is costly as we need to recreate the whole tree. Despite of these disadvantages, Segment trees can be used for this usecase.
[Here is my code for Segment trees](https://github.com/omkar3060/omkar3060.github.io/blob/main/codes/segment_tree.cpp){:target="_blank"}<br>


### 5. **Cumulative Earnings and Real-Time Updates**

  **Fenwick Trees/Binary Indexed Trees(BIT)** can be used for managing and querying cumulative earnings of drivers or total rides completed over time. This requires efficient prefix sum queries and point updates. Fenwick Trees are easier to implement and understand compared to Segment Trees. They require less space, typically using O(N) space compared O(4*N) in segment trees. But, Fenwick Trees are not well-suited for range updates; they can handle point updates efficiently but range updates are more complex and less efficient. They are limited in the types of range queries they can handle directly. They are primarily designed for prefix sums and cannot be easily adapted for other operations like min, max, or GCD without significant modifications. Despite of these disadvantages, Fenwick trees can be used for this usecase.
[Here is my code for Fenwick trees](https://github.com/omkar3060/omkar3060.github.io/blob/main/codes/BIT.cpp){:target="_blank"}<br>

### 6. **Driver Onboarding and Training Workflow**

  When a new driver joins Ola, there is a structured process they must follow, including background checks, vehicle inspections, training modules, and document verification. Each step must be completed before proceeding to the next. Each task can be represented as a node in a DAG, with edges indicating dependencies and **Topological sort** can be used as it will provide an ordered sequence of tasks for efficient onboarding.
[Here is my code for Topological Sort](https://github.com/omkar3060/omkar3060.github.io/blob/main/codes/topo_sort.cpp){:target="_blank"}<br>

### 7. **Ride History and User Data**

  **Skip Lists** can be used to store and access user ride history and other personal data sorted by timestamps. This allows for efficient querying of historical rides within a certain time range or retrieving the most recent rides quickly. This improves the responsiveness of the application, providing users with a seamless experience when viewing their ride history or account details. But, Skip Lists require additional pointers for each level in the list, which increases memory usage compared to simpler data structures like arrays or linked lists. Also, the performance of Skip Lists depends on the randomization process used for balancing. While they offer good average-case performance (O(log n)), worst-case performance can still be linear in some scenarios.


### 8. **Data Transmission**

  **Huffman Coding** can be used to compress ride data, such as ride logs, user reviews, and feedback. By encoding frequently occurring data with shorter bit lengths, Ola can reduce the storage requirements for their databases. Alos, Compressing data before transmission between servers or to users’ devices can save bandwidth and **reduce transmission time**.

### 9. **Route Suggestions**

  **Depth-First Search (DFS)** can be used to explore all possible paths from a rider’s current location to their destination, helping in scenarios where finding all potential routes is beneficial, such as suggesting scenic or alternate routes. But, DFS does not always find the shortest or most efficient path, especially in large, complex networks. Shortest path algorithms can be used to do the same. **Breadth-First Search (BFS)** can also be used for finding the shortest path in an unweighted graph. When mapping out possible routes, BFS can quickly determine the shortest path from the pickup point to the drop-off location.

### 10. **Infrastructure Planning and Network Expansion**

  For planning the expansion of Ola’s service areas, **Spanning Tree algorithms** such as **Kruskal's** and **Prim's** can help identify the most cost-effective way to connect new service zones to the existing network. By finding the MST, Ola can minimize the infrastructure costs required to expand services. But, These algorithms provide a static solution and might need additional heuristics to handle real-world complexities like varying demand and geographical constraints.



