#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AFileLog(py::module &m)
{
    py::class_< AFileLog,  AFileWriter   >(m, "AFileLog")
        .def("StaticClass", &AFileLog::StaticClass, py::return_value_policy::reference)
        .def("CloseLog", &AFileLog::CloseLog)
        .def("OpenLog", &AFileLog::OpenLog)
          ;
}