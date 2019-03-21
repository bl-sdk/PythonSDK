#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIDataStore_OnlineGameSearch(py::object m)
{
    py::class_< UUIDataStore_OnlineGameSearch,  UUIDataStore_Remote   >(m, "UUIDataStore_OnlineGameSearch")
        .def_readwrite("VfTable_IUIListElementProvider", &UUIDataStore_OnlineGameSearch::VfTable_IUIListElementProvider)
        .def_readwrite("VfTable_IUIListElementCellProvider", &UUIDataStore_OnlineGameSearch::VfTable_IUIListElementCellProvider)
        .def_readwrite("SearchResultsName", &UUIDataStore_OnlineGameSearch::SearchResultsName)
        .def_readwrite("OnlineSub", &UUIDataStore_OnlineGameSearch::OnlineSub)
        .def_readwrite("GameInterface", &UUIDataStore_OnlineGameSearch::GameInterface)
        .def_readonly("UnknownData00", &UUIDataStore_OnlineGameSearch::UnknownData00)
        .def_readwrite("GameSearchCfgList", &UUIDataStore_OnlineGameSearch::GameSearchCfgList)
        .def_readwrite("SelectedIndex", &UUIDataStore_OnlineGameSearch::SelectedIndex)
        .def_readwrite("ActiveSearchIndex", &UUIDataStore_OnlineGameSearch::ActiveSearchIndex)
        .def("StaticClass", &UUIDataStore_OnlineGameSearch::StaticClass, py::return_value_policy::reference)
        .def("ClearAllSearchResults", &UUIDataStore_OnlineGameSearch::ClearAllSearchResults)
        .def("eventMoveToPrevious", &UUIDataStore_OnlineGameSearch::eventMoveToPrevious)
        .def("eventMoveToNext", &UUIDataStore_OnlineGameSearch::eventMoveToNext)
        .def("eventSetCurrentByName", &UUIDataStore_OnlineGameSearch::eventSetCurrentByName)
        .def("eventSetCurrentByIndex", &UUIDataStore_OnlineGameSearch::eventSetCurrentByIndex)
        .def("FindSearchConfigurationIndex", &UUIDataStore_OnlineGameSearch::FindSearchConfigurationIndex)
        .def("eventGetActiveGameSearch", &UUIDataStore_OnlineGameSearch::eventGetActiveGameSearch, py::return_value_policy::reference)
        .def("eventGetCurrentGameSearch", &UUIDataStore_OnlineGameSearch::eventGetCurrentGameSearch, py::return_value_policy::reference)
        .def("BuildSearchResults", &UUIDataStore_OnlineGameSearch::BuildSearchResults)
        .def("eventShowHostGamercard", &UUIDataStore_OnlineGameSearch::eventShowHostGamercard)
        .def("eventGetSearchResultFromIndex", &UUIDataStore_OnlineGameSearch::eventGetSearchResultFromIndex)
        .def("OnSearchComplete", &UUIDataStore_OnlineGameSearch::OnSearchComplete)
        .def("OverrideQuerySubmission", &UUIDataStore_OnlineGameSearch::OverrideQuerySubmission)
        .def("eventSubmitGameSearch", &UUIDataStore_OnlineGameSearch::eventSubmitGameSearch)
        .def("InvalidateCurrentSearchResults", &UUIDataStore_OnlineGameSearch::InvalidateCurrentSearchResults)
        .def("eventInit", &UUIDataStore_OnlineGameSearch::eventInit)
          ;
}