#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FResourcePoolReference()
{
    class_< FResourcePoolReference >("FResourcePoolReference", no_init)
        .def_readwrite("PoolManager", &FResourcePoolReference::PoolManager)
        .def_readwrite("PoolIndexInManager", &FResourcePoolReference::PoolIndexInManager)
        .def_readwrite("PoolGUID", &FResourcePoolReference::PoolGUID)
        .def_readwrite("Data", &FResourcePoolReference::Data)
  ;
}