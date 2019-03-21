#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCommandlet()
{
    class_< UCommandlet, bases< UObject >  , boost::noncopyable>("UCommandlet", no_init)
        .def_readwrite("HelpDescription", &UCommandlet::HelpDescription)
        .def_readwrite("HelpUsage", &UCommandlet::HelpUsage)
        .def_readwrite("HelpWebLink", &UCommandlet::HelpWebLink)
        .def_readwrite("HelpParamNames", &UCommandlet::HelpParamNames)
        .def_readwrite("HelpParamDescriptions", &UCommandlet::HelpParamDescriptions)
        .def("StaticClass", &UCommandlet::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventMain", &UCommandlet::eventMain)
        .staticmethod("StaticClass")
  ;
}