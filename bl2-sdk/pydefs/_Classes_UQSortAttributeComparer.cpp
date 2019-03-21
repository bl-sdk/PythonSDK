#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UQSortAttributeComparer()
{
    class_< UQSortAttributeComparer, bases< UQSortComparer >  , boost::noncopyable>("UQSortAttributeComparer", no_init)
        .def_readwrite("Attribute", &UQSortAttributeComparer::Attribute)
        .def("StaticClass", &UQSortAttributeComparer::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}