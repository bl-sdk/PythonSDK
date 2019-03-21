#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_RunBehaviorAlias(py::object m)
{
    py::class_< UBehavior_RunBehaviorAlias,  UBehaviorBase   >(m, "UBehavior_RunBehaviorAlias")
        .def_readwrite("BehaviorAlias", &UBehavior_RunBehaviorAlias::BehaviorAlias)
        .def_readwrite("AliasSelfContext", &UBehavior_RunBehaviorAlias::AliasSelfContext)
        .def_readwrite("AliasMyInstigatorContext", &UBehavior_RunBehaviorAlias::AliasMyInstigatorContext)
        .def_readwrite("AliasOtherEventParticipantContext", &UBehavior_RunBehaviorAlias::AliasOtherEventParticipantContext)
        .def("StaticClass", &UBehavior_RunBehaviorAlias::StaticClass, py::return_value_policy::reference)
          ;
}