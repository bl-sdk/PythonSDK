#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMCPBase()
{
    class_< UMCPBase, bases< UObject >  , boost::noncopyable>("UMCPBase", no_init)
        .def_readwrite("VfTable_FTickableObject", &UMCPBase::VfTable_FTickableObject)
        .def("StaticClass", &UMCPBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}