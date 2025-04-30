# Hybrid-Virtual-Memory-Manager

# **Hybrid Virtual Memory Management Simulator**

## **1. Project Overview**
The **Hybrid Virtual Memory Management Simulator** is an interactive educational tool that demonstrates modern operating system memory management with a focus on **paging techniques**. The simulator provides real-time visualization of:
- Memory allocation and deallocation
- Page replacement algorithms (FIFO and LRU)
- Swapping between RAM and secondary storage
- Memory pressure detection and handling

## **2. Key Features**
### **Memory Management Simulation**
- **Dynamic Memory Allocation**: Visual representation of memory blocks with color-coding (free, allocated, swapped)
- **Page Replacement Algorithms**: Implementation of FIFO (First-In-First-Out) and LRU (Least Recently Used) algorithms
- **Swapping Mechanism**: Simulates moving pages between RAM and disk with configurable delay
- **Memory Pressure Detection**: Automatic swapping when memory usage exceeds configurable thresholds

### **Interactive Controls**
- **Manual Memory Operations**: Allocate, free, and swap memory blocks with single clicks
- **Configuration Panel**: Adjustable parameters including:
  - Total memory size (4MB-64MB)
  - Block size (1MB, 2MB, 4MB)
  - Disk type (HDD, SSD, NVMe) affecting swap speed
  - Memory pressure thresholds
- **Preset Scenarios**: Quick-load configurations for desktop, embedded, and thrashing scenarios

### **Visualization & Monitoring**
- **Real-time Memory Chart**: Doughnut chart showing free/allocated/swapped memory
- **Memory Usage History**: Stacked bar chart tracking memory usage over time
- **CPU Utilization**: Simulated CPU usage graph
- **Operation Logs**: Timestamped record of all memory operations

## **3. Technical Implementation**
### **Frontend Components**
- **Interactive UI**: Built with HTML5, CSS3, and vanilla JavaScript
- **Data Visualization**: Chart.js for memory and CPU usage graphs
- **Responsive Design**: Adapts to different screen sizes
- **Auditory Feedback**: Sound effects for memory operations

### **Simulation Logic**
- **Memory Representation**: Array-based memory model with state tracking
- **Process Management**: Tracks process ownership of memory blocks
- **Algorithm Implementation**:
  - FIFO using queue data structure
  - LRU using stack data structure
- **Automatic Memory Management**: Background checks for memory pressure

## **4. How to Use**
1. Configure memory parameters using the sliders and dropdowns
2. Use the control buttons to:
   - **Allocate**: Assign memory to new processes
   - **Free**: Release most recently used memory
   - **Swap**: Manually trigger swapping to disk
   - **FIFO/LRU**: Test different page replacement algorithms
3. Observe the visualizations and logs to understand memory behavior
4. Try different preset scenarios to see varied memory conditions

## **5. Future Enhancements**
- Add segmentation fault simulation by implementing memory protection bits
- Include more page replacement algorithms (Optimal, Clock)
- Enhance visualization with process-specific memory mapping
- Add multi-level paging simulation
- Implement proper virtual address translation visualization

## **6. Technology Stack**
- **Frontend**: HTML5, CSS3, JavaScript
- **Visualization**: Chart.js
- **Version Control**: Git/GitHub
- **Deployment**: Static web hosting
