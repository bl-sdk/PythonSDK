#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FFriendsQuery()
{
    py::class_< FFriendsQuery >("FFriendsQuery")
        .def_readwrite("UniqueId", &FFriendsQuery::UniqueId)
  ;
}