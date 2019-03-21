#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIMissionInventory()
{
    class_< UIMissionInventory, bases< UInterface >  , boost::noncopyable>("UIMissionInventory", no_init)
        .def("StaticClass", &UIMissionInventory::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}