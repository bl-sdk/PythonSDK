#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FFriendsQuery()
{
    class_< FFriendsQuery >("FFriendsQuery", no_init)
        .def_readwrite("UniqueId", &FFriendsQuery::UniqueId)
  ;
}