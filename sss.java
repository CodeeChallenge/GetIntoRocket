import java.util.*;
import java.io.*;
public class sss{
    DataOutputStream dataOutput;
    public sss(String outputFile) throws IOException {
        dataOutput = new DataOutputStream(new FileOutputStream(outputFile));
    }
    public void write(Student student) throws IOException {
        dataOutput.writeUTF(student.getName());
        dataOutput.writeBoolean(student.getGender());
        dataOutput.writeInt(student.getAge());
        dataOutput.writeFloat(student.getGrade());
    }
    public void save() throws IOException {
        dataOutput.close();
    }
    public static void main(String[] args) {
        if (args.length < 1) {
            System.out.println("Please provide output file");
            System.exit(0);
        }
        String outputFile = args[0];
        List<Student> listStudent = new ArrayList<>();
        listStudent.add(new Student("Alice", false, 23, 80.5f));
        listStudent.add(new Student("Brian", true, 22, 95.0f));
        listStudent.add(new Student("Carol", false, 21, 79.8f));
        try {
            StudentRecordWriter writer = new StudentRecordWriter(outputFile);
            for (Student student : listStudent) {
                writer.write(student);
            }
            writer.save();
        } catch (IOException ex) {
            ex.printStackTrace();
        }
    }
}
