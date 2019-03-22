#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USearchDirection_AwayFromMe(py::module &m)
{
    py::class_< USearchDirection_AwayFromMe,  USearchDirection   >(m, "USearchDirection_AwayFromMe")
        .def("StaticClass", &USearchDirection_AwayFromMe::StaticClass, py::return_value_policy::reference)
          ;
}