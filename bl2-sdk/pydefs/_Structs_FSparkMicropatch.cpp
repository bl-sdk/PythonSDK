#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSparkMicropatch()
{
    class_< FSparkMicropatch >("FSparkMicropatch", no_init)
        .def_readwrite("ObjectPath", &FSparkMicropatch::ObjectPath)
        .def_readwrite("PropertyPath", &FSparkMicropatch::PropertyPath)
        .def_readwrite("OriginalValue", &FSparkMicropatch::OriginalValue)
        .def_readwrite("NewValue", &FSparkMicropatch::NewValue)
  ;
}