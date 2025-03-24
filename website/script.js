// List of files in your repository
const files = [
    "CPP001_First_Program.cpp",
    "CPP002_Variables.cpp"
];

// Base path to your repository
const basePath = "c:/Home_repositories/Personal_1/CPP_Beginner_to_Expert/";

// Populate the file list
const fileList = document.getElementById("files");
files.forEach(file => {
    const li = document.createElement("li");
    const link = document.createElement("a");
    link.href = "#";
    link.textContent = file;
    link.onclick = () => loadFileContent(file);
    li.appendChild(link);
    fileList.appendChild(li);
});

// Load file content
function loadFileContent(file) {
    const filePath = basePath + file;

    // Simulate fetching file content (replace with actual server logic if needed)
    fetch(filePath)
        .then(response => response.text())
        .then(content => {
            document.getElementById("content").textContent = content;
        })
        .catch(error => {
            document.getElementById("content").textContent = "Error loading file: " + error;
        });
}