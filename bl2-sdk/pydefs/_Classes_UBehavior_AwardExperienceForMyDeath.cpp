#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AwardExperienceForMyDeath(py::object m)
{
    py::class_< UBehavior_AwardExperienceForMyDeath,  UBehaviorBase   >(m, "UBehavior_AwardExperienceForMyDeath")
        .def("StaticClass", &UBehavior_AwardExperienceForMyDeath::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_AwardExperienceForMyDeath::ApplyBehaviorToContext)
          ;
}