using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Net.Http;
using System.Web.Http;
using TodoList.Domain;
using TodoList.Persistence;

namespace TodoList.Service.Controllers
{
    public class TodoItemController : ApiController
    {
        public TodoItemRepository Repository
        {
            get { return new TodoItemRepository(); }
        }
        
        // GET api/todoitem
        public IEnumerable<TodoItem> Get()
        {
            return this.Repository.GetTodoItems();
        }

        // GET api/todoitem/5
        public TodoItem Get(int id)
        {
            return this.Repository.GetTodoItemById(id);
        }

        // POST api/todoitem
        public void Post([FromBody]string value)
        {
        }

        // PUT api/todoitem/5
        public void Put(int id, [FromBody]string value)
        {
        }

        // DELETE api/todoitem/5
        public void Delete(int id)
        {
        }
    }
}
