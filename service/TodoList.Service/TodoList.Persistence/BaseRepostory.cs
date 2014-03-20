using System;
using System.Collections.Generic;
using System.Linq;
using FluentData;
using System.Data;

namespace TodoList.Persistence
{
    public abstract class BaseRepostory
    {
        public IDbContext Context()
        {
            return new DbContext().ConnectionStringName("TodoListConnection", new SqlServerProvider());
        }
    }
}
