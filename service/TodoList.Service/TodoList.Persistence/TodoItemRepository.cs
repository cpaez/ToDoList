using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using TodoList.Domain;

namespace TodoList.Persistence
{
    public class TodoItemRepository : BaseRepostory
    {
        public List<TodoItem> GetTodoItems()
        {
            return this.Context().Sql(@"select * from TodoItems;").QueryMany<TodoItem>();
        }

        public TodoItem GetTodoItemById(int itemId)
        { 
                return Context().Sql(@"select * from TodoItems where Id = @ItemId") 	
				.Parameter("ItemId", itemId).QuerySingle<TodoItem>();
        }
    }
}
