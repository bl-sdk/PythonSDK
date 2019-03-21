#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AFileLog()
{
    class_< AFileLog, bases< AFileWriter >  , boost::noncopyable>("AFileLog", no_init)
        .def("StaticClass", &AFileLog::StaticClass, return_value_policy< reference_existing_object >())
        .def("CloseLog", &AFileLog::CloseLog)
        .def("OpenLog", &AFileLog::OpenLog)
        .staticmethod("StaticClass")
  ;
}