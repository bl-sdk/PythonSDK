#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGoal_Null()
{
    py::class_< UGoal_Null,  UPathGoalEvaluator   >("UGoal_Null")
        .def("StaticClass", &UGoal_Null::StaticClass, py::return_value_policy::reference)
        .def("Recycle", &UGoal_Null::Recycle)
        .def("GoUntilBust", &UGoal_Null::GoUntilBust)
        .staticmethod("StaticClass")
  ;
}