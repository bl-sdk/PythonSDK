#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UHelpCommandlet()
{
    class_< UHelpCommandlet, bases< UCommandlet >  , boost::noncopyable>("UHelpCommandlet", no_init)
        .def("StaticClass", &UHelpCommandlet::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventMain", &UHelpCommandlet::eventMain)
        .staticmethod("StaticClass")
  ;
}