#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowOnlineGameSearchCustom()
{
    class_< UWillowOnlineGameSearchCustom, bases< UWillowOnlineGameSearch >  , boost::noncopyable>("UWillowOnlineGameSearchCustom", no_init)
        .def("StaticClass", &UWillowOnlineGameSearchCustom::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}