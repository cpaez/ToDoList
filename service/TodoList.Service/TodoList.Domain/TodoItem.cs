using System;

namespace TodoList.Domain
{
    public class TodoItem
    {
        public int Id { get; set; }
        public string Name { get; set; }
        public bool IsCompleted { get; set; }
        public DateTime DateCreated { get; set; }
    }
}
