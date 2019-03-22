#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCoverSearchCriteria(py::module &m)
{
    py::class_< UCoverSearchCriteria,  UGBXDefinition   >(m, "UCoverSearchCriteria")
        .def_readwrite("DistanceToOriginCandidateTestMax", &UCoverSearchCriteria::DistanceToOriginCandidateTestMax)
        .def_readwrite("DistanceToThreatCandidateTest", &UCoverSearchCriteria::DistanceToThreatCandidateTest)
        .def_readwrite("MinDistanceToOrigin", &UCoverSearchCriteria::MinDistanceToOrigin)
        .def_readwrite("MaxDistanceToOrigin", &UCoverSearchCriteria::MaxDistanceToOrigin)
        .def_readwrite("ScoreDistanceToOrigin", &UCoverSearchCriteria::ScoreDistanceToOrigin)
        .def_readwrite("MinDistanceToThreat", &UCoverSearchCriteria::MinDistanceToThreat)
        .def_readwrite("MaxDistanceToThreat", &UCoverSearchCriteria::MaxDistanceToThreat)
        .def_readwrite("ScoreDistanceToThreat", &UCoverSearchCriteria::ScoreDistanceToThreat)
        .def_readwrite("MaxDistanceProvidesCover", &UCoverSearchCriteria::MaxDistanceProvidesCover)
        .def_readwrite("ScoreProvidesCover", &UCoverSearchCriteria::ScoreProvidesCover)
        .def_readwrite("ScoreVantageOnBestTarget", &UCoverSearchCriteria::ScoreVantageOnBestTarget)
        .def_readwrite("ScoreVantageOnAnyTarget", &UCoverSearchCriteria::ScoreVantageOnAnyTarget)
        .def_readwrite("ScoreUnoccupiedLink", &UCoverSearchCriteria::ScoreUnoccupiedLink)
        .def_readwrite("ScoreNonBlacklistedCover", &UCoverSearchCriteria::ScoreNonBlacklistedCover)
        .def("StaticClass", &UCoverSearchCriteria::StaticClass, py::return_value_policy::reference)
          ;
}