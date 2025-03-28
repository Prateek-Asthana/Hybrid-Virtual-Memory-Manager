<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Hybrid Virtual Memory Manager</title>
    <style>
        body {
            background-color: #1e1e1e;
            color: white;
            font-family: Arial, sans-serif;
            text-align: center;
        }
        #memory-container {
            display: flex;
            flex-wrap: wrap;
            gap: 5px;
            justify-content: center;
            margin-top: 20px;
        }
        .memory-block {
            width: 50px;
            height: 50px;
            text-align: center;
            line-height: 50px;
            border-radius: 5px;
            font-size: 12px;
        }
        .allocated { background-color: green; }
        .free { background-color: red; }
        .swapped { background-color: blue; }
        .button {
            margin: 10px;
            padding: 10px 20px;
            cursor: pointer;
            border-radius: 5px;
        }
    </style>
</head>
<body>
    <h1>Hybrid Virtual Memory Manager</h1>
    <button class="button" onclick="allocateMemory()">Allocate Memory</button>
    <button class="button" onclick="freeMemory()">Free Memory</button>
    <button class="button" onclick="swapMemory()">Swap Memory</button>
    <div id="memory-container"></div>

    <script>
        const totalFrames = 16;
        let memory = Array(totalFrames).fill("free"); // Initialize all frames as free

        function renderMemory() {
            const container = document.getElementById("memory-container");
            container.innerHTML = "";
            memory.forEach((status, index) => {
                const block = document.createElement("div");
                block.className = `memory-block ${status}`;
                block.innerText = index;
                container.appendChild(block);
            });
        }

        function allocateMemory() {
            const freeIndex = memory.indexOf("free");
            if (freeIndex !== -1) {
                memory[freeIndex] = "allocated";
                renderMemory();
            } else {
                alert("No free memory available! Consider swapping.");
            }
        }

        function freeMemory() {
            const allocatedIndex = memory.lastIndexOf("allocated");
            if (allocatedIndex !== -1) {
                memory[allocatedIndex] = "free";
                renderMemory();
            } else {
                alert("No allocated memory to free.");
            }
        }

        function swapMemory() {
            const allocatedIndex = memory.indexOf("allocated");
            if (allocatedIndex !== -1) {
                memory[allocatedIndex] = "swapped";
                renderMemory();
            } else {
                alert("No allocated memory to swap.");
            }
        }

        renderMemory();
    </script>
</body>
</html>
