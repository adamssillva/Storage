#include "csdb/balance.h"

#include "csdb/internal/shared_data_ptr_implementation.h"

namespace csdb {

class Balance::priv : public ::csdb::internal::shared_data
{
  DEFAULT_PRIV_CLONE()
};
SHARED_DATA_CLASS_IMPLEMENTATION(Balance)

} // namespace csdb
