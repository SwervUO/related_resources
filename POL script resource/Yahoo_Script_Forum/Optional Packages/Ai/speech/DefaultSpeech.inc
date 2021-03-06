///////////////////////////////////////////////////////////
// DefaultSpeech.inc
//
// Default NPC speech.
//
// DO NOT EDIT THIS FILE.  COPY IT AND EDIT THAT.
//
// Creator: Mercy
// Contact: mkow@sympatico.ca
//
// Created: 12-Sept-2000
// Updated: 12-Sept-2000
//
///////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////
// Purpose: Test to see if I should process speech or not.
// Params:  ev		Event object.
//						ev.type		Event type.
//						ev.source	Source of event.
//						ev.text		Text of event.
//						ev.item		Item associated w/ event.
//						ev.amount	Amount associated w/ event.
// Returns: 0		No, do not process speech.
//			1		Yes, talk to me baby!
///////////////////////////////////////////////////////////
function SpeechTest(byref ev)
	return 1;
endfunction

///////////////////////////////////////////////////////////
// Purpose: Custom speech processing here.
// Params:  ev		Event object.
//						ev.type		Event type.
//						ev.source	Source of event.
//						ev.text		Text of event.
//						ev.item		Item associated w/ event.
//						ev.amount	Amount associated w/ event.
// Returns: 0		Do not do default processing.
//			1		Continue with default processing.
///////////////////////////////////////////////////////////
function Speech(byref ev)
	return 1;
endfunction