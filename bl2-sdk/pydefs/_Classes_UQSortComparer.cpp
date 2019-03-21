#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UQSortComparer()
{
    class_< UQSortComparer, bases< UObject >  , boost::noncopyable>("UQSortComparer", no_init)
        .def("StaticClass", &UQSortComparer::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}