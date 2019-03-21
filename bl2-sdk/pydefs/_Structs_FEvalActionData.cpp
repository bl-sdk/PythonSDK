#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FEvalActionData()
{
    class_< FEvalActionData >("FEvalActionData", no_init)
        .def_readwrite("Action", &FEvalActionData::Action)
  ;
}