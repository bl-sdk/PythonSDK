#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInventoryUIStatComparer()
{
    class_< UInventoryUIStatComparer, bases< UQSortComparer >  , boost::noncopyable>("UInventoryUIStatComparer", no_init)
        .def_readwrite("StatIndex", &UInventoryUIStatComparer::StatIndex)
        .def("StaticClass", &UInventoryUIStatComparer::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}