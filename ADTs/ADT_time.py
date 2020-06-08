class time_12:

	# tens_hour, hour, tens, mins 
	# e.g 08:13 - tens_hour = 0, hour = 8, tens = 1, mins = 3 
	
	def __init__ (self):
		self.tens_hour = 0
		self.hour = 0
		self.tens = 0
		self.mins = 0
		self.__am = True

	def display_time (self):
		time_string = str(self.tens_hour) + str(self.hour) + ":" + str(self.tens) + str(self.mins)
		print (time_string)
	
	def mins_increment (self):
		self.mins += 1 
		if self.mins == 10:
			self.mins = 0
			self.tens_increment()

	def tens_increment(self):
		self.tens += 1
		if self.tens == 6:
			self.tens = 0
			self.hour_increment()

	def hour_increment(self):
		if self.__am:
			if self.tens_hour == 1 and self.hour == 1:
				self.__am = False
				self.tens_hour = 1
				self.hour = 2
			elif self.hour == 9 and self.tens_hour == 0:
				self.hour = 0
				self.tens_hour_increment()
			else:
				self.hour += 1 
		else:
			if self.tens_hour == 1 and self.hour == 2:
				self.tens_hour = 0 
				self.hour = 1
			elif self.tens_hour == 1 and self.hour == 1:
				self.tens_hour =0
				self.hour = 0
				self.__am = True
			elif self.hour == 9:
				self.hour = 0
				self.tens_hour_increment()
			else:
				self.hour += 1

	def tens_hour_increment (self):
		self.tens_hour += 1
		if self.tens_hour == 2:
			self.tens_hour = 0










