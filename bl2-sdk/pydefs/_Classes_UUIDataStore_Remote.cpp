#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUIDataStore_Remote()
{
    class_< UUIDataStore_Remote, bases< UUIDataStore >  , boost::noncopyable>("UUIDataStore_Remote", no_init)
        .def("StaticClass", &UUIDataStore_Remote::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}