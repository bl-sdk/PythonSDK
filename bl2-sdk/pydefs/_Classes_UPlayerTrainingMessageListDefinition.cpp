#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerTrainingMessageListDefinition()
{
    py::class_< UPlayerTrainingMessageListDefinition,  UGBXDefinition   >("UPlayerTrainingMessageListDefinition")
        .def_readwrite("TrainingMessages", &UPlayerTrainingMessageListDefinition::TrainingMessages)
        .def("StaticClass", &UPlayerTrainingMessageListDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}